#ifdef LAUNCHENABLEFORCONCURRENTTHREADSATEND_EXPORTS
#define LAUNCHENABLEFORCONCURRENTTHREADSATEND_API __declspec(dllexport)
#else
#define LAUNCHENABLEFORCONCURRENTTHREADSATEND_API __declspec(dllimport)
#endif

namespace OpenAvrilLIB
{
	class LAUNCHENABLEFORCONCURRENTTHREADSATEND_API CLIBLaunchEnableForConcurrentThreadsAtEND {
	public:
		CLIBLaunchEnableForConcurrentThreadsAtEND();
		static void* create_Program();

		static void request_Wait_launch(class launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId);
		static void thread_End(class launchEnableForConcurrentThreadsAt_END_Framework*, uint8_t concurrent_CoreId);

		static uint8_t get_coreId_To_launch(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
		static bool get_Flag_Active(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
		static bool get_Flag_ConcurrentCoreState(class launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId);
		static bool get_Flag_Idle(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
		static bool get_State_launchBit(class launchEnableForConcurrentThreadsAt_END_Framework* obj);
		static void set_state_ConcurrentCore(class launchEnableForConcurrentThreadsAt_END_Framework* obj, uint8_t concurrent_CoreId, bool value);

	private:
		static class launchEnableForConcurrentThreadsAt_END_Framework* get_ptr_Framework();
		static void set_ptr_Framework(class launchEnableForConcurrentThreadsAt_END_Framework* framework);
	};
}