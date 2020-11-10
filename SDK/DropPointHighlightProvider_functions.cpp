
#include "../SDK.h"

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function DropPointHighlightProvider.DropPointHighlightProvider_C.GetDropHighlightMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADropPoint_C*            Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     MeshToHighlight                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDropPointHighlightProvider_C::GetDropHighlightMesh(class ADropPoint_C* Sender, class UPrimitiveComponent** MeshToHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPointHighlightProvider.DropPointHighlightProvider_C.GetDropHighlightMesh");

	UDropPointHighlightProvider_C_GetDropHighlightMesh_Params params;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeshToHighlight != nullptr)
		*MeshToHighlight = params.MeshToHighlight;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
