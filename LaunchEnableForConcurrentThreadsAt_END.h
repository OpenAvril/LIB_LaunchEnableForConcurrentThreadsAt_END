#pragma once

namespace OpenAvrilLIB
{
    class LaunchEnableForConcurrentThreadsAt_END
    {
        // classes.

// registers.

// pointers.

    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_END();

// destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_END();

// public.
    // dynamic.
        void initialise_Control();
        void thread_Start(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId);
        void thread_End(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId);
        // get.
        class LaunchEnableForConcurrentThreadsAt_END_Global* get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_END_Control* get_ptr_LaunchConcurrency_Control();
        // set.
    // static.
        // get.
        // set.
    private:
// private.
    // dynaminc.
        // get.
        // set.
        void set_ptr_Global(class LaunchEnableForConcurrentThreadsAt_END_Global* newClass);
        void set_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_END_Control* newClass);
    // static.
        static void create_ptr_Global();
        static void create_ptr_LaunchConcurrency_Control();
        // get.
        static class LaunchEnableForConcurrentThreadsAt_END_Global* Get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_END_Control* Get_ptr_LaunchConcurrency_Control();
        // set.
        static void Set_ptr_Global(class LaunchEnableForConcurrentThreadsAt_END_Global* newClass);
        static void Set_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_END_Control* newClass);
    };
}