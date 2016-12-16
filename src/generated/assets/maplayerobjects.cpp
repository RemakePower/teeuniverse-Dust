/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverse.
 * 
 * TeeUniverse is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverse.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * THIS FILE HAS BEEN GENERATED BY A SCRIPT.
 * DO NOT EDIT MANUALLY!
 *
 * Please use the script "scripts/assets/assets.py" to regenerate it.
 *
 * Why this file is generated by a script?
 * Because there is more than 10 files that follow the same format.
 * In addition, each time a new member is added, enums, getter, setters,
 * copy/transfert functions and storage structure must be updated.
 * It's too much to avoid mistakes.
 */

#include <generated/assets/maplayerobjects.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_MapLayerObjects::CVertex::CVertex()
{
	m_Position = 0.0f;
	m_Weight = 1.0f;
	m_Color = 1.0f;
	m_Smoothness = CBezierVertex::TYPE_AUTOSMOOTH;
}

CAsset_MapLayerObjects::CObject::CObject()
{
	m_Position = 0.0f;
	m_Size = 1.0f;
	m_Angle = 0.0f;
	m_ClosedPath = false;
}

CAsset_MapLayerObjects::CAsset_MapLayerObjects()
{
	m_Visibility = true;
}

void CAsset_MapLayerObjects::CVertex::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_MapLayerObjects::CVertex& SysType)
{
	SysType.m_Position.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Position.m_X);
	SysType.m_Position.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Position.m_Y);
	SysType.m_Weight = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Weight);
	SysType.m_Color = pLoadingContext->ArchiveFile()->ReadColor(TuaType.m_Color);
	SysType.m_Smoothness = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_Smoothness);
}

void CAsset_MapLayerObjects::CObject::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_MapLayerObjects::CObject& SysType)
{
	SysType.m_Position.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Position.m_X);
	SysType.m_Position.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Position.m_Y);
	SysType.m_Size.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Size.m_X);
	SysType.m_Size.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Size.m_Y);
	SysType.m_Angle = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_Angle);
	pLoadingContext->ReadAssetPath(TuaType.m_StylePath, SysType.m_StylePath);
	{
		const CAsset_MapLayerObjects::CVertex::CTuaType* pData = (const CAsset_MapLayerObjects::CVertex::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Vertex.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Vertex.m_Size);
		SysType.m_Vertex.resize(Size);
		for(int i=0; i<Size; i++)
		{
			CAsset_MapLayerObjects::CVertex::CTuaType::Read(pLoadingContext, pData[i], SysType.m_Vertex[i]);
		}
	}
	
	SysType.m_ClosedPath = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ClosedPath);
}

void CAsset_MapLayerObjects::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_MapLayerObjects& SysType)
{
	CAsset::CTuaType::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_ParentPath, SysType.m_ParentPath);
	{
		const CAsset_MapLayerObjects::CObject::CTuaType* pData = (const CAsset_MapLayerObjects::CObject::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Object.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Object.m_Size);
		SysType.m_Object.resize(Size);
		for(int i=0; i<Size; i++)
		{
			CAsset_MapLayerObjects::CObject::CTuaType::Read(pLoadingContext, pData[i], SysType.m_Object[i]);
		}
	}
	
	SysType.m_Visibility = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_Visibility);
}

void CAsset_MapLayerObjects::CVertex::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerObjects::CVertex& SysType, CTuaType& TuaType)
{
	TuaType.m_Position.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Position.x);
	TuaType.m_Position.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Position.y);
	TuaType.m_Weight = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Weight);
	TuaType.m_Color = pLoadingContext->ArchiveFile()->WriteColor(SysType.m_Color);
	TuaType.m_Smoothness = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_Smoothness);
}

void CAsset_MapLayerObjects::CObject::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerObjects::CObject& SysType, CTuaType& TuaType)
{
	TuaType.m_Position.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Position.x);
	TuaType.m_Position.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Position.y);
	TuaType.m_Size.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Size.x);
	TuaType.m_Size.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Size.y);
	TuaType.m_Angle = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_Angle);
	pLoadingContext->WriteAssetPath(SysType.m_StylePath, TuaType.m_StylePath);
	{
		TuaType.m_Vertex.m_Size = SysType.m_Vertex.size();
		CAsset_MapLayerObjects::CVertex::CTuaType* pData = new CAsset_MapLayerObjects::CVertex::CTuaType[SysType.m_Vertex.size()];
		for(int i=0; i<SysType.m_Vertex.size(); i++)
		{
			CAsset_MapLayerObjects::CVertex::CTuaType::Write(pLoadingContext, SysType.m_Vertex[i], pData[i]);
		}
		TuaType.m_Vertex.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_MapLayerObjects::CVertex::CTuaType)*SysType.m_Vertex.size());
		delete[] pData;
	}
	TuaType.m_ClosedPath = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ClosedPath);
}

void CAsset_MapLayerObjects::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapLayerObjects& SysType, CTuaType& TuaType)
{
	CAsset::CTuaType::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_ParentPath, TuaType.m_ParentPath);
	{
		TuaType.m_Object.m_Size = SysType.m_Object.size();
		CAsset_MapLayerObjects::CObject::CTuaType* pData = new CAsset_MapLayerObjects::CObject::CTuaType[SysType.m_Object.size()];
		for(int i=0; i<SysType.m_Object.size(); i++)
		{
			CAsset_MapLayerObjects::CObject::CTuaType::Write(pLoadingContext, SysType.m_Object[i], pData[i]);
		}
		TuaType.m_Object.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_MapLayerObjects::CObject::CTuaType)*SysType.m_Object.size());
		delete[] pData;
	}
	TuaType.m_Visibility = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_Visibility);
}

template<>
int CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case OBJECT_ARRAYSIZE:
			return GetObjectArraySize();
		case OBJECT_VERTEX_ARRAYSIZE:
			return GetObjectVertexArraySize(SubPath);
		case OBJECT_VERTEX_SMOOTHNESS:
			return GetObjectVertexSmoothness(SubPath);
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case OBJECT_ARRAYSIZE:
			SetObjectArraySize(Value);
			return true;
		case OBJECT_VERTEX_ARRAYSIZE:
			SetObjectVertexArraySize(SubPath, Value);
			return true;
		case OBJECT_VERTEX_SMOOTHNESS:
			SetObjectVertexSmoothness(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
bool CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const
{
	switch(ValueType)
	{
		case OBJECT_CLOSEDPATH:
			return GetObjectClosedPath(SubPath);
		case VISIBILITY:
			return GetVisibility();
	}
	return CAsset::GetValue<bool>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, bool Value)
{
	switch(ValueType)
	{
		case OBJECT_CLOSEDPATH:
			SetObjectClosedPath(SubPath, Value);
			return true;
		case VISIBILITY:
			SetVisibility(Value);
			return true;
	}
	return CAsset::SetValue<bool>(ValueType, SubPath, Value);
}

template<>
float CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const
{
	switch(ValueType)
	{
		case OBJECT_POSITION_X:
			return GetObjectPositionX(SubPath);
		case OBJECT_POSITION_Y:
			return GetObjectPositionY(SubPath);
		case OBJECT_SIZE_X:
			return GetObjectSizeX(SubPath);
		case OBJECT_SIZE_Y:
			return GetObjectSizeY(SubPath);
		case OBJECT_ANGLE:
			return GetObjectAngle(SubPath);
		case OBJECT_VERTEX_POSITION_X:
			return GetObjectVertexPositionX(SubPath);
		case OBJECT_VERTEX_POSITION_Y:
			return GetObjectVertexPositionY(SubPath);
		case OBJECT_VERTEX_WEIGHT:
			return GetObjectVertexWeight(SubPath);
	}
	return CAsset::GetValue<float>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, float Value)
{
	switch(ValueType)
	{
		case OBJECT_POSITION_X:
			SetObjectPositionX(SubPath, Value);
			return true;
		case OBJECT_POSITION_Y:
			SetObjectPositionY(SubPath, Value);
			return true;
		case OBJECT_SIZE_X:
			SetObjectSizeX(SubPath, Value);
			return true;
		case OBJECT_SIZE_Y:
			SetObjectSizeY(SubPath, Value);
			return true;
		case OBJECT_ANGLE:
			SetObjectAngle(SubPath, Value);
			return true;
		case OBJECT_VERTEX_POSITION_X:
			SetObjectVertexPositionX(SubPath, Value);
			return true;
		case OBJECT_VERTEX_POSITION_Y:
			SetObjectVertexPositionY(SubPath, Value);
			return true;
		case OBJECT_VERTEX_WEIGHT:
			SetObjectVertexWeight(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<float>(ValueType, SubPath, Value);
}

template<>
vec2 CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, vec2 DefaultValue) const
{
	switch(ValueType)
	{
		case OBJECT_POSITION:
			return GetObjectPosition(SubPath);
		case OBJECT_SIZE:
			return GetObjectSize(SubPath);
		case OBJECT_VERTEX_POSITION:
			return GetObjectVertexPosition(SubPath);
	}
	return CAsset::GetValue<vec2>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, vec2 Value)
{
	switch(ValueType)
	{
		case OBJECT_POSITION:
			SetObjectPosition(SubPath, Value);
			return true;
		case OBJECT_SIZE:
			SetObjectSize(SubPath, Value);
			return true;
		case OBJECT_VERTEX_POSITION:
			SetObjectVertexPosition(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<vec2>(ValueType, SubPath, Value);
}

template<>
vec4 CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const
{
	switch(ValueType)
	{
		case OBJECT_VERTEX_COLOR:
			return GetObjectVertexColor(SubPath);
	}
	return CAsset::GetValue<vec4>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value)
{
	switch(ValueType)
	{
		case OBJECT_VERTEX_COLOR:
			SetObjectVertexColor(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<vec4>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_MapLayerObjects::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case PARENTPATH:
			return GetParentPath();
		case OBJECT_STYLEPATH:
			return GetObjectStylePath(SubPath);
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_MapLayerObjects::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case PARENTPATH:
			SetParentPath(Value);
			return true;
		case OBJECT_STYLEPATH:
			SetObjectStylePath(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_MapLayerObjects::AddSubItem(int Type, const CSubPath& SubPath)
{
	switch(Type)
	{
		case TYPE_OBJECT:
			return AddObject();
		case TYPE_OBJECT_VERTEX:
			return AddObjectVertex(SubPath);
	}
	return -1;
}

void CAsset_MapLayerObjects::DeleteSubItem(const CSubPath& SubPath)
{
	switch(SubPath.GetType())
	{
		case TYPE_OBJECT:
			DeleteObject(SubPath);
			break;
		case TYPE_OBJECT_VERTEX:
			DeleteObjectVertex(SubPath);
			break;
	}
}

void CAsset_MapLayerObjects::RelMoveSubItem(const CSubPath& SubPath, int RelMove)
{
	switch(SubPath.GetType())
	{
		case TYPE_OBJECT:
			RelMoveObject(SubPath, RelMove);
			break;
		case TYPE_OBJECT_VERTEX:
			RelMoveObjectVertex(SubPath, RelMove);
			break;
	}
}


