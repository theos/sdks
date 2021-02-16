#ifndef __OS_WORKGROUP_PARALLEL__
#define __OS_WORKGROUP_PARALLEL__

#ifndef __OS_WORKGROUP_INDIRECT__
#error "Please #include <os/workgroup.h> instead of this file directly."
#include <os/workgroup_base.h> // For header doc
#endif

__BEGIN_DECLS

OS_WORKGROUP_ASSUME_NONNULL_BEGIN

/*!
 * @typedef os_workgroup_parallel_t
 *
 * @abstract
 * A subclass of an os_workgroup_t for tracking parallel work.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_SUBCLASS_DECL(os_workgroup_parallel, os_workgroup);

/*
 * @typedef os_workgroup_parallel_create
 *
 * @abstract
 * Creates an os_workgroup which tracks a parallel workload. The process
 * creating the workgroup is considered the owner of the workgroup.
 *
 * The thread which creates the workgroup does not automatically join it.
 *
 * See also os_workgroup_max_parallel_threads.
 *
 * @param attr
 * This field is currently not used and should be NULL
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT OS_WORKGROUP_RETURNS_RETAINED
os_workgroup_parallel_t _Nullable
os_workgroup_parallel_create(const char *name, os_workgroup_attr_t _Nullable attr);


OS_WORKGROUP_ASSUME_NONNULL_END

__END_DECLS

#endif /* __OS_WORKGROUP_PARALLEL__ */
