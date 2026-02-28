#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
    class LaunchEnableForConcurrentThreadsAt_END_Framework
    {
    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_END_Framework();

// destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_END_Framework();

// public.
    // dynamic.
        void initialise(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj);
        // get.
        class LaunchEnableForConcurrentThreadsAt_END* get_ptr_LaunchConcurrency();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynaminc.
        // get.
        // set.
    // static.
        static void stat_create_ptr_LaunchConcurrency();
        // get.
        static class LaunchEnableForConcurrentThreadsAt_END* stat_get_ptr_LaunchConcurrency();
        // set.
        static void stat_set_ptr_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_END* concurrentQue);
    // pointers.
        // classes.
        static class LaunchEnableForConcurrentThreadsAt_END* _ptr_LaunchConcurrency;
        // registers.
    };
}