#pragma once
namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtEND
{
    class LaunchEnableForConcurrentThreadsAt_END_Control
    {
    public:
        LaunchEnableForConcurrentThreadsAt_END_Control();
        virtual ~LaunchEnableForConcurrentThreadsAt_END_Control();
        void launchEnable_Activate(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj);
        void launchEnable_Request(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID);
        void launchEnable_SortQue(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads);
        void launchQue_Update(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t number_Implemented_Threads);
        void dyn_REG_initialise_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value);
        void dyn_REG_initialise_flag_praisinglaunch(bool* newINITIALISED_Flagbit);
        void dyn_REG_initialise_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value);
        void dyn_REG_initialise_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t* newINITIALISED_Value);
        void dyn_REG_initialise_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, class LaunchEnableForConcurrentThreadsAt_END_Global* ptr_Global);
        void dyn_REG_initialise_Item_On_list_Of_Que_Of_CoreTolaunch(uint8_t slotID);
        void dyn_REG_initialise_new_concurrentCycle_Try_CoreId_Index(uint8_t* newINITIALISED_Value);
        uint8_t dyn_REG_get_concurrentCycle_Try_CoreId_Index();
        bool dyn_REG_get_flag_praisinglaunch();
        uint32_t dyn_REG_get_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID);
        uint32_t dyn_REG_get_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID);
        bool dyn_REG_get_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID);
        uint8_t dyn_REG_get_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrenct_threadID);
        uint8_t dyn_REG_get_new_concurrentCycle_Try_CoreId_Index();
        void set_concurrentCycle_Try_CoreId_Index(uint8_t newValue);
        void set_flag_praisinglaunch(bool newFlag);
        void set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        void set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        void set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState);
        void set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID);
        void set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue);
    private:
        void dynamicStagger(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t coreId);
        void launchEnable_ShiftQueValues(class LaunchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrentThreadID_A, uint8_t concurrentThreadID_B);
        static uint8_t* _stat_REG_ptr_concurrentCycle_Try_CoreId_Index;
        static bool* _stat_REG_ptr_flag_praisinglaunch;
        static std::list<uint32_t>* _stat_REG_ptr_list_Of_launchActive_Count_For_ThreadID;
        static std::list<uint32_t>* _stat_REG_ptr_list_Of_launchIdle_Count_For_ThreadID;
        static std::list<bool>* _stat_REG_ptr_list_Of_STATE_For_ConcurrentCore;
        static std::list<uint8_t>* _stat_REG_ptr_list_for_Que_Of_CoreTolaunch;
        static uint8_t* _stat_REG_ptr_new_concurrentCycle_Try_CoreId_Index;
        static void stat_REG_create_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value);
        static void stat_REG_create_flag_praisinglaunch(bool* newDEFAULT_Flagbit);
        static void stat_REG_create_list_Of_launchActive_Count_For_ThreadID(uint32_t* newDEFAULT_Value);
        static void stat_REG_create_list_Of_launchIdle_Count_For_ThreadID(uint32_t* newDEFAULT_Value);
        static void stat_REG_create_list_Of_STATE_For_ConcurrentCore(bool* newDEFAULT_FlagBit);
        static void stat_REG_create_list_for_Que_Of_CoreTolaunch();
        static void stat_REG_create_new_concurrentCycle_Try_CoreId_Index(uint8_t* newDEFAULT_Value);
        static uint8_t* stat_REG_get_ptr_concurrentCycle_Try_CoreId_Index();
        static bool* stat_REG_get_ptr_flag_praisinglaunch();
        static std::list<uint32_t>* stat_REG_get_ptr_list_Of_launchActive_Count_For_ThreadID();
        static std::list<uint32_t>* stat_REG_get_ptr_list_Of_launchIdle_Count_For_ThreadID();
        static std::list<bool>* stat_REG_get_ptr_list_Of_STATE_For_ConcurrentCore();
        static std::list<uint8_t>* stat_REG_get_ptr_List_QUE_Of_CoreTolaunch();
        static uint8_t* stat_REG_get_ptr_new_concurrentCycle_Try_CoreId_Index();
        static void stat_REG_set_concurrentCycle_Try_CoreId_Index(uint8_t newValue);
        static void stat_REG_set_flag_praisinglaunch(bool newFlag);
        static void stat_REG_set_Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        static void stat_REG_set_Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrenctThreadID, uint32_t newValue);
        static void stat_REG_set_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrenct_threadID, bool newState);
        static void stat_REG_set_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrenct_threadID);
        static void stat_REG_set_new_concurrentCycle_Try_CoreId_Index(uint32_t newValue);
    };
}