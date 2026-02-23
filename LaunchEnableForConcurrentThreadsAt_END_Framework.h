#pragma once

namespace OpenAvrilLIB
{
    class LaunchEnableForConcurrentThreadsAt_END_Framework
    {
// classes.

// registers.

// pointers.

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
        void set_ptr_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_END* concurrentQue);

    // static.
        static void create_ptr_LaunchConcurrency();
        // get.
        static class LaunchEnableForConcurrentThreadsAt_END* Get_ptr_LaunchConcurrency();
        // set.
        static void Set_ptr_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_END* concurrentQue);
    };
}