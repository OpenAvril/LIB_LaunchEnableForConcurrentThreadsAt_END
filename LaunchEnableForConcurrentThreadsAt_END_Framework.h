#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
    class LaunchEnableForConcurrentThreadsAt_END_Framework
    {
    public:
        LaunchEnableForConcurrentThreadsAt_END_Framework();
        virtual ~LaunchEnableForConcurrentThreadsAt_END_Framework();
        void dyn_initialise(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj);
        class LaunchEnableForConcurrentThreadsAt_END* dyn_CLASS_get_ptr_LaunchConcurrency();
        static class LaunchEnableForConcurrentThreadsAt_END* stat_CLASS_get_ptr_LaunchConcurrency();
    private:
        static class LaunchEnableForConcurrentThreadsAt_END* _stat_CLASS_ptr_LaunchConcurrency;
        static void stat_CLASS_create_ptr_LaunchConcurrency();
    };
}