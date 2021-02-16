#ifndef __OS_WORKGROUP_INTERVAL__
#define __OS_WORKGROUP_INTERVAL__

#ifndef __OS_WORKGROUP_INDIRECT__
#error "Please #include <os/workgroup.h> instead of this file directly."
#include <os/workgroup_base.h> // For header doc
#endif

__BEGIN_DECLS

OS_WORKGROUP_ASSUME_NONNULL_BEGIN

/*!
 * @typedef os_workgroup_interval_t
 *
 * @abstract
 * A subclass of an os_workgroup_t for tracking work performed as part of
 * a repeating interval-driven workload.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_SUBCLASS_DECL(os_workgroup_interval, os_workgroup);

/* During the first instance of this API, the only supported interval
 * workgroups are for audio workloads. Please refer to the AudioToolbox
 * framework for more information.
 */

/*
 * @typedef os_workgroup_interval_data, os_workgroup_interval_data_t
 *
 * @abstract
 * An opaque structure containing additional configuration for the workgroup
 * interval.
 */
typedef struct os_workgroup_interval_data_opaque_s os_workgroup_interval_data_s;
typedef struct os_workgroup_interval_data_opaque_s *os_workgroup_interval_data_t;
#define OS_WORKGROUP_INTERVAL_DATA_INITIALIZER \
	{ .sig = _OS_WORKGROUP_INTERVAL_DATA_SIG_INIT }

/*
 * @function os_workgroup_interval_start
 *
 * @abstract
 * Indicates to the system that the threads which are part of this workgroup
 * have begun working on the interval workload with the specified configuration.
 * This call is realtime safe. This can only be called by a thread which is a
 * member of the os_workgroup specified. This function will return an error when
 * called on a workgroup that has been cancelled.
 *
 * It is invalid to call os_workgroup_interval_start() again on the same
 * workgroup before calling os_workgroup_interval_finish(). If the timestamps
 * are malformed, an error is returned.
 *
 * @param start, deadline
 * The two timestamps should be specified in the os_clockid_t with which the
 * os_workgroup_interval_t was created.
 *
 * @param data
 * This parameter is not used and should be NULL.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT OS_WORKGROUP_WARN_RESULT
int
os_workgroup_interval_start(os_workgroup_interval_t wg, uint64_t start, uint64_t
		deadline, os_workgroup_interval_data_t _Nullable data);

/* @function os_workgroup_interval_update
 *
 * @abstract
 * Updates the existing interval workgroup to have the new interval data
 * specified. This modification is real time safe. This can only be called by a
 * thread which is a member of the os_workgroup specified.
 *
 * This function can only be called after calling os_workgroup_interval_start()
 * and before calling os_workgroup_interval_finish().
 *
 * @param deadline
 * The deadline timestamp should be specified in the os_clockid_t with which the
 * os_workgroup_interval_t was created.
 *
 * @param data
 * This parameter is not used and should be NULL.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT OS_WORKGROUP_WARN_RESULT
int
os_workgroup_interval_update(os_workgroup_interval_t wg, uint64_t deadline,
		os_workgroup_interval_data_t _Nullable data);

/*
 * @function os_workgroup_interval_finish
 *
 * @abstract
 * Indicates to the runtime that the threads which are part of this workgroup
 * have finished working on the abstract workload. This call is real time safe.
 * This can only be called by a thread which is a member of the os_workgroup
 * specified.
 *
 * It is invalid to call os_workgroup_interval_finish() on an
 * os_workgroup_interval without a prior call to os_workgroup_interval_start().
 *
 * @param data
 * This parameter is not used and should be NULL.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT OS_WORKGROUP_WARN_RESULT
int
os_workgroup_interval_finish(os_workgroup_interval_t wg,
		os_workgroup_interval_data_t _Nullable data);

OS_WORKGROUP_ASSUME_NONNULL_END

__END_DECLS

#endif /* __OS_WORKGROUP_INTERVAL__ */
