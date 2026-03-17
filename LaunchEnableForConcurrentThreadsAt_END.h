#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
    class LaunchEnableForConcurrentThreadsAt_END
    {
    public:
        LaunchEnableForConcurrentThreadsAt_END();
        virtual ~LaunchEnableForConcurrentThreadsAt_END();
        void dyn_thread_Start(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID);
        void dyn_thread_End(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID);
        void dyn_initialise_Control();
        class LaunchEnableForConcurrentThreadsAt_END_Global* dyn_CLASS_get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_END_Control* dyn_CLASS_get_ptr_LaunchConcurrency_Control();
    private:
        static class LaunchEnableForConcurrentThreadsAt_END_Global* _stat_CLASS_ptr_Global;
        static class LaunchEnableForConcurrentThreadsAt_END_Control* _stat_CLASS_ptr_LaunchConcurrency_Control;
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_LaunchConcurrency_Control();
        static class LaunchEnableForConcurrentThreadsAt_END_Global* stat_CLASS_get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_END_Control* stat_CLASS_get_ptr_LaunchConcurrency_Control();
    };
}