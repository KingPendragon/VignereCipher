#include "VigenereForwardIterator.h"

using namespace std;

VigenereForwardIterator::VigenereForwardIterator(iVigenereStream& aIStream) : fIStream(aIStream)
{
	fCurrentChar = aIStream;
}

char VigenereForwardIterator::operator*() const
{
	return fCurrentChar;
}

VigenereForwardIterator& VigenereForwardIterator::operator++()
{
	fIStream;
	fCurrentChar++;

	return *this;
}

VigenereForwardIterator VigenereForwardIterator::operator++(int)
{
	VigenereForwardIterator result = *this;

	++(*this);

	return result;
}

bool VigenereForwardIterator::operator==(const VigenereForwardIterator& aOther) const
{
	return fCurrentChar == aOther.fCurrentChar;
}

bool VigenereForwardIterator::operator!=(const VigenereForwardIterator& aOther) const
{
	return !(*this == aOther);
}

VigenereForwardIterator VigenereForwardIterator::begin() const
{
	VigenereForwardIterator Result(*this);

	return	Result.begin();
}

VigenereForwardIterator VigenereForwardIterator::end() const
{
	VigenereForwardIterator Result(*this);

	return Result.end();
}
