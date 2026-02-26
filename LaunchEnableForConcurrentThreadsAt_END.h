#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
    class LaunchEnableForConcurrentThreadsAt_END
    {
    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_END();

// destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_END();

// public.
    // dynamic.
        void initialise_Control(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj);
        void thread_Start(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID);
        void thread_End(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID);
        // get.
        class LaunchEnableForConcurrentThreadsAt_END_Global* get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_END_Control* get_ptr_LaunchConcurrency_Control();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void create_ptr_Global();
        static void create_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj);
        // get.
        static class LaunchEnableForConcurrentThreadsAt_END_Global* stat_get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_END_Control* stat_get_ptr_LaunchConcurrency_Control();
        // set.
        static void stat_set_ptr_Global(class LaunchEnableForConcurrentThreadsAt_END_Global* newClass);
        static void stat_set_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_END_Control* newClass);
    // pointers.
        // classes.
        static class LaunchEnableForConcurrentThreadsAt_END* _ptr_LaunchConcurrency;
        // registers.
    };
}