#pragma once

#include <map>

struct AllocationStats
{
	int64_t largestPosition;
	int64_t largestSize;
	int64_t largestUsage;

	int64_t largestFreePosition;
	int64_t largestFreeSize;
	int64_t largestFreeUsage;

	int64_t totalSize;
	int64_t totalUsage;
};

class Allocations
{
public:
	static void clear();
	static void setArea(int64_t fileID, int64_t position, int64_t space, int64_t usage, bool usesFill);
	static void forgetArea(int64_t fileID, int64_t position, int64_t space);

	static void validateOverlap();
	static AllocationStats collectStats();

private:
	struct Key
	{
		int64_t fileID;
		int64_t position;

		inline bool operator <(const Allocations::Key &other) const
		{
			return std::tie(fileID, position) < std::tie(other.fileID, other.position);
		}
	};
	struct Usage
	{
		int64_t space;
		int64_t usage;
		bool usesFill;
	};
	static std::map<Key, Usage> allocations;
};
