#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
    class LaunchEnableForConcurrentThreadsAt_END
    {
    public:
        LaunchEnableForConcurrentThreadsAt_END();
        virtual ~LaunchEnableForConcurrentThreadsAt_END();
        void app_thread_Start(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID);
        void app_thread_End(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID);
        static void boot0_CLASS_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END();
        static void boot1_CLASS_DEFINE_LaunchEnableForConcurrentThreadsAt_END();
        static void boot3_CLASS_INITIALISE_LaunchEnableForConcurrentThreadsAt_END();
        static void boot0_REG_DECLAIRE_LaunchEnableForConcurrentThreadsAt_END();
        void boot1_REG_DEFINE_LaunchEnableForConcurrentThreadsAt_END();
        void boot2_REG_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_END();
        void boot3_REG_INITIALISE_LaunchEnableForConcurrentThreadsAt_END();
        void boot4_PGM_INSTANTIATE_LaunchEnableForConcurrentThreadsAt_END();
        class LaunchEnableForConcurrentThreadsAt_END_Global* dyn_CLASS_get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_END_Control* dyn_CLASS_get_ptr_LaunchConcurrency_Control();
    private:
        static class LaunchEnableForConcurrentThreadsAt_END_Global* _stat_CLASS_ptr_Global;
        static class LaunchEnableForConcurrentThreadsAt_END_Control* _stat_CLASS_ptr_LaunchConcurrency_Control;
        static void stat_CLASS_boot1_DEFINE_Global();
        static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        static void stat_CLASS_boot3_INITIALISE_Global();
        static void stat_CLASS_boot3_INITIALISE_LaunchConcurrency_Control();
        static class LaunchEnableForConcurrentThreadsAt_END_Global* stat_CLASS_get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_END_Control* stat_CLASS_get_ptr_LaunchConcurrency_Control();
    };
}