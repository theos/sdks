// modified from Apple's dyld
// https://github.com/apple-oss-distributions/dyld/blob/18d3cb0/other-tools/dsc_extractor.cpp#L1080-L1111

#include <dlfcn.h>
#include <stddef.h>
#include <stdio.h>

typedef int (*extractor_proc)(const char *shared_cache_file_path, const char *extraction_root_path, void (^progress)(unsigned current, unsigned total));

int main(int argc, const char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "usage: %s <path-to-dsc_extractor-bundle> <path-to-cache-file> <path-to-device-dir>\n", argv[0]);
        return 1;
    }

    void *const handle = dlopen(argv[1], RTLD_LAZY);
    if (handle == NULL) {
        fprintf(stderr, "dsc_extractor.bundle could not be loaded\n");
        return 1;
    }

    extractor_proc const proc = (extractor_proc)dlsym(handle, "dyld_shared_cache_extract_dylibs_progress");
    if (proc == NULL) {
        fprintf(stderr, "%s did not have dyld_shared_cache_extract_dylibs_progress symbol\n", argv[1]);
        return 1;
    }

    int result = proc(argv[2], argv[3], ^(unsigned current, unsigned total) {
		unsigned const c = current + 1;
        printf("  %u/%u%c", c, total, (c == total) ? '\n' : '\r');
        fflush(stdout); // since '\r' won't flush automatically
    });
    dlclose(handle);

    return result;
}
