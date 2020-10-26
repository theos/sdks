#ifndef __OS_WORKGROUP_OBJECT__
#define __OS_WORKGROUP_OBJECT__

#ifndef __OS_WORKGROUP_INDIRECT__
#error "Please #include <os/workgroup.h> instead of this file directly."
#include <os/workgroup_base.h> // For header doc
#endif

__BEGIN_DECLS

OS_WORKGROUP_ASSUME_NONNULL_BEGIN

/*!
 * @typedef os_workgroup_t
 *
 * @abstract
 * A reference counted os object representing an abstract workload that needs to
 * be distinctly recognized, tracked and measured by the system.  The workgroup
 * is a collection of threads all working cooperatively. An os_workgroup object
 * - when not an instance of a specific os_workgroup_t subclass - represents a
 * generic workload and makes no assumptions about the kind of work done.
 *
 * @discussion
 * Threads explicitly join a workgroup to mark themselves as participants in the
 * workload.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_DECL(os_workgroup);

/* The main use of this API is through instantiations of the concrete subclasses
 * - please refer to workgroup_interval.h and workgroup_parallel.h for more
 * information on creating workgroups.
 *
 * The functions below operate on all subclasses of os_workgroup_t.
 */

/* Attribute creation and specification */

/*!
 * @typedef os_workgroup_attr_t
 *
 * @abstract
 * Pointer to an opaque structure for describing attributes that can be
 * configured on a workgroup at creation.
 */
typedef struct os_workgroup_attr_opaque_s os_workgroup_attr_s;
typedef struct os_workgroup_attr_opaque_s *os_workgroup_attr_t;
#define OS_WORKGROUP_ATTR_INITIALIZER { .sig = _OS_WORKGROUP_ATTR_SIG_INIT }

/* The main use of this API is through instantiations of the concrete subclasses
 * with attributes- please refer to workgroup_interval.h and
 * workgroup_parallel.h for more information.
 *
 * The functions below operate on all subclasses of os_workgroup_t.
 */

/*
 * @function os_workgroup_copy_port
 *
 * @abstract
 * Returns a reference to a send right representing this workgroup that can be
 * sent to other processes. This port is to be passed to
 * os_workgroup_create_with_port() to create a workgroup object.
 *
 * It is the client's responsibility to release the send right reference.
 *
 * If an error is encountered, errno is set and returned.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT OS_WORKGROUP_WARN_RESULT
int
os_workgroup_copy_port(os_workgroup_t wg, mach_port_t *mach_port_out);

/*
 * @function os_workgroup_create_with_port
 *
 * @abstract
 * Create a new immutable os_workgroup object from a send right returned by a
 * previous call to os_workgroup_copy_port. The function does not consume a
 * reference on the specified send right.
 *
 * The thread which creates the workgroup does not automatically join it.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT OS_WORKGROUP_RETURNS_RETAINED
os_workgroup_t _Nullable
os_workgroup_create_with_port(const char *name, mach_port_t mach_port);

/*
 * @function os_workgroup_create_with_workgroup
 *
 * @abstract
 * Create a new immutable os_workgroup object from an existing os_workgroup.
 *
 * The thread which creates the workgroup does not automatically join it.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT OS_WORKGROUP_RETURNS_RETAINED
os_workgroup_t _Nullable
os_workgroup_create_with_workgroup(const char *name, os_workgroup_t wg);

/*
 * @typedef os_workgroup_max_parallel_threads_attr_t
 *
 * @abstract
 * A pointer to a structure describing the set of properties of a workgroup to
 * override with the explicitly specified values in the structure.
 *
 * See also os_workgroup_max_parallel_threads.
 */
typedef struct os_workgroup_max_parallel_threads_attr_s os_workgroup_mpt_attr_s;
typedef struct os_workgroup_max_parallel_threads_attr_s *os_workgroup_mpt_attr_t;

/*
 * @function os_workgroup_max_parallel_threads
 *
 * @abstract
 * Returns the system's recommendation for maximum number of threads the client
 * should make for a multi-threaded workload in a given workgroup.
 *
 * This API considers both the current hardware and the attributes of the
 * provided workgroup. It does not take into consideration the current load of
 * the system and therefore always provides a maximal recommendation based on
 * the provided parameters.
 *
 * @param wg
 * The workgroup in which the multi-threaded workload will be performed in. The
 * threads performing the multi-threaded workload are expected to join this
 * workgroup.
 *
 * @param overrides
 * This value is currently unused and should be NULL.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE OS_WORKGROUP_EXPORT
int
os_workgroup_max_parallel_threads(os_workgroup_t wg, os_workgroup_mpt_attr_t
		_Nullable attr);

/* Membership in a workgroup */

typedef uint32_t os_workgroup_index;

/* @typedef os_workgroup_join_token, os_workgroup_join_token_t
 *
 * @abstract
 * An opaque join token which the client needs to pass to os_workgroup_join_self
 * and os_workgroup_leave_self
 */
typedef struct os_workgroup_join_token_opaque_s os_workgroup_join_token_s;
typedef struct os_workgroup_join_token_opaque_s *os_workgroup_join_token_t;

/* @function os_workgroup_join_self
 *
 * @abstract
 * Joins the current thread to the specified workgroup and returns an index that
 * represents the thread's id in the work group, as well as a join token. The id
 * is zero indexed and is namespaced per workgroup object in the process. The
 * ids provided are strictly monotonic and never reused. This API is real-time
 * safe.
 *
 * @param token_out
 * Pointer to a client allocated struct which the function will populate
 * with the join token. This token must be passed in by the thread when it calls
 * os_workgroup_leave_self().
 *
 * Errors will be returned in the following cases:
 *
 * EALREADY			The thread is already part of a workgroup that the specified
 *					workgroup does not nest with
 * EINVAL			The workgroup has been cancelled
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT OS_WORKGROUP_WARN_RESULT
int
os_workgroup_join_self(os_workgroup_t wg, os_workgroup_join_token_t token_out,
		os_workgroup_index *_Nullable id_out);

/* @function os_workgroup_leave_self
 *
 * @abstract
 * This removes the current thread from a workgroup it has previously joined.
 * Threads must leave workgroups that they have joined before exiting. Failing
 * to do so will abort the process. This API is real time safe.
 *
 * If the join token is malformed, the process will be aborted.
 *
 * @param
 * This is the join token populated by the last call to
 * os_workgroup_join_self(). Threads must leave nested os_workgroups in the
 * order that they join them. Failure to do so will abort the process.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT
void
os_workgroup_leave_self(os_workgroup_t wg, os_workgroup_join_token_t token);

/*
 * @function os_workgroup_cancel
 *
 * @abstract
 * This API invalidates a workgroup. No new work should be initiated for a
 * cancelled workgroup and work that is already inflight should periodically
 * check for cancellation using os_workgroup_testcancel.
 *
 * Threads currently in the workgroup continue to be tracked together but no new
 * threads may join this workgroup - the only possible operation allowed is to
 * leave the workgroup. All other actions on the workgroup are no-ops after
 * cancellation.
 *
 * This API is idempotent, additional calls to os_workgroup_cancel will not do
 * anything.
 *
 * Cancellation is local to the workgroup object it is called on and does not
 * affect other workgroups which are created from it.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT
void
os_workgroup_cancel(os_workgroup_t wg);

/*
 * @function os_workgroup_testcancel
 *
 * @abstract
 * Returns true if the workgroup object has been cancelled.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT
bool
os_workgroup_testcancel(os_workgroup_t wg);

/* @function os_workgroup_set_context
 *
 * @abstract
 * Associates a client defined context with the workgroup. This function can
 * only be called by a thread which is a member of the workgroup. The context
 * is local to the workgroup object in the process.
 *
 * This function can be called multiple times but it is the responsibility of
 * the caller to free the previous context which will be returned.
 *
 * The last reference to the workgroup object cannot be dropped without setting
 * context to NULL. Failing to do so will abort the process.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT OS_WORKGROUP_WARN_RESULT
void *
os_workgroup_set_context(os_workgroup_t wg, void *context);

/*
 * @function os_workgroup_get_context
 *
 * @abstract
 * Returns client defined context associated with the workgroup with a
 * previous call to os_workgroup_set_context. Returns NULL if no context is
 * available.
 */
API_AVAILABLE(macos(10.16), ios(14.0), tvos(14.0), watchos(7.0))
OS_WORKGROUP_TEMPORARILY_SWIFT_UNAVAILABLE
OS_WORKGROUP_EXPORT
void *
os_workgroup_get_context(os_workgroup_t wg);

OS_WORKGROUP_ASSUME_NONNULL_END

__END_DECLS

#endif /* __OS_WORKGROUP_OBJECT__ */
