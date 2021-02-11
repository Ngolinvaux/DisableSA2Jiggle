#include "stdafx.h"
#include "HelperFuns.h"


extern "C"
{

	const void* const loc_71729f = (const void*)0x71729f;
	__declspec(naked) void thingAmy() {
		__asm {

			sub esp, 4
			jmp loc_71729f
		}
	}


	const void* const loc_717028 = (const void*)0x717028;
	__declspec(naked) void thingSonic() {
		__asm {
			mov esi, [esp + 0Ch]
			sub esp, 4
			jmp loc_717028
		}
	}
	const void* const loc_7287c0 = (const void*)0x7287c0;
	__declspec(naked) void thingRouge() {
		__asm {
			mov esi, [esp + 0Ch]
			sub esp, 4
			jmp loc_7287c0
		}
	}
	const void* const loc_717588 = (const void*)0x717588;
	__declspec(naked) void thingShadow() {
		__asm {
			mov esi, [esp + 0Ch]
			sub esp, 4
			jmp loc_717588
		}
	}
	const void* const loc_728399 = (const void*)0x728399;
	__declspec(naked) void thingKnux() {
		__asm {
			mov esi, [esp + 0Ch]
			sub esp, 4
			jmp loc_728399
		}
	}

	const void* const loc_728a8a = (const void*)0x728a8a;
	__declspec(naked) void thingTikal() {
		__asm {

			sub esp, 4
			jmp loc_728a8a
		}
	}
	const void* const loc_49ab13 = (const void*)0x49ab13;
	__declspec(naked) void thingSuperSonic() {
		__asm {

			sub esp, 4
			jmp loc_49ab13
		}
	}
	const void* const loc_49ad77 = (const void*)0x49ad77;
	__declspec(naked) void thingSuperShadow() {
		__asm {

			sub esp, 4
			jmp loc_49ad77
		}
	}

	__declspec(dllexport) void Init(const char* path, const HelperFunctions& helperFunctions) {
		WriteJump((void*)0x716FDD, thingSonic); 
		WriteJump((void*)0x71753d, thingShadow);
		WriteJump((void*)0x728346, thingKnux);
		WriteJump((void*)0x728696, thingRouge);
		WriteJump((void*)0x717257, thingAmy);
		WriteJump((void*)0x49aacb, thingSuperSonic);
		WriteJump((void*)0x49ad2f, thingSuperShadow);
		WriteJump((void*)0x728a3c, thingTikal);
		WriteData<3>((void*)0x728a8e, 0x90); // tikal jiggle
	}

	__declspec(dllexport) void OnFrame() {
	
	}


	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };


}