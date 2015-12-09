#ifndef STORAGE_TYPES_H
#define STORAGE_TYPES_H

#include <string>

#include "utility/types.h"

struct StorageEdge
{
	StorageEdge(Id id, int type, Id sourceNodeId, Id targetNodeId)
		: id(id)
		, type(type)
		, sourceNodeId(sourceNodeId)
		, targetNodeId(targetNodeId)
	{}

	Id id;
	int type;
	Id sourceNodeId;
	Id targetNodeId;
};

struct StorageNode
{
	StorageNode(Id id, int type, Id nameId, bool defined)
		: id(id)
		, type(type)
		, nameId(nameId)
		, defined(defined)
	{}

	Id id;
	int type;
	Id nameId;
	bool defined;
};

struct StorageFile
{
	StorageFile(Id id, Id nameId, const std::string& filePath, const std::string& modificationTime)
		: id(id)
		, nameId(nameId)
		, filePath(filePath)
		, modificationTime(modificationTime)
	{}

	Id id;
	Id nameId;
	std::string filePath;
	std::string modificationTime;
};

struct StorageNameHierarchyElement
{
	StorageNameHierarchyElement(Id id, const std::string& name, Id parentId)
		: id(id), name(name), parentId(parentId)
	{}

	Id id;
	std::string name;
	Id parentId;
};

struct StorageSourceLocation
{
	StorageSourceLocation(Id id, Id elementId, Id fileNodeId, uint startLine, uint startCol, uint endLine, uint endCol, bool isScope)
		: id(id)
		, elementId(elementId)
		, fileNodeId(fileNodeId)
		, startLine(startLine)
		, startCol(startCol)
		, endLine(endLine)
		, endCol(endCol)
		, isScope(isScope)
	{}

	Id id;
	Id elementId;
	Id fileNodeId;
	uint startLine;
	uint startCol;
	uint endLine;
	uint endCol;
	bool isScope;
};

struct StorageComponentAccess
{
	StorageComponentAccess(Id memberEdgeId, int type)
		: memberEdgeId(memberEdgeId)
		, type(type)
	{}

	Id memberEdgeId;
	int type;
};

struct StorageCommentLocation
{
	StorageCommentLocation(Id id, Id fileNodeId, uint startLine, uint startCol, uint endLine, uint endCol)
		: id(id)
		, fileNodeId(fileNodeId)
		, startLine(startLine)
		, startCol(startCol)
		, endLine(endLine)
		, endCol(endCol)
	{}

	Id id;
	Id fileNodeId;
	uint startLine;
	uint startCol;
	uint endLine;
	uint endCol;
};

struct StorageError
{
	StorageError(const std::string& message, const std::string& filePath, uint lineNumber, uint columnNumber)
		: message(message)
		, filePath(filePath)
		, lineNumber(lineNumber)
		, columnNumber(columnNumber)
	{}

	std::string message;
	std::string filePath;
	uint lineNumber;
	uint columnNumber;
};

#endif // STORAGE_TYPES_H
