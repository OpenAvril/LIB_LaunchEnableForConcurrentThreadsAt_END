#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
    class LaunchEnableForConcurrentThreadsAt_END
    {
    public:
// public.
    // constructor.
        LaunchEnableForConcurrentThreadsAt_END();

    // destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_END();

    // dynamic.
        void thread_Start(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID);
        void thread_End(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID);
        // create.
        void dyn_initialise_Control(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj);
        // get.
        class LaunchEnableForConcurrentThreadsAt_END_Global* dyn_CLASS_get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_END_Control* dyn_CLASS_get_ptr_LaunchConcurrency_Control();
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // classes.
            // create.
            // get.
            // set.
        // registers.
            // create.
            // get.
            // set.
    // static.
        // classes.
        static class LaunchEnableForConcurrentThreadsAt_END_Global* _stat_CLASS_ptr_Global;
        static class LaunchEnableForConcurrentThreadsAt_END_Control* _stat_CLASS_ptr_LaunchConcurrency_Control;
            // create.
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj);
            // get.
            // set.
        static class LaunchEnableForConcurrentThreadsAt_END_Global* stat_CLASS_get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_END_Control* stat_CLASS_get_ptr_LaunchConcurrency_Control();
        // registers.
            // create.
            // get.
            // set.
    };
}