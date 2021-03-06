#include "memManager_t.h"

/* ~~~ Defines ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


/* ~~~ Struct ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


/* ~~~ Internal function forward declartion ~~~~~~~~~~~~~~~~~~~~~~~~ */



/* ~~~ function ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

MemManager_t::MemManager_t()
{
	m_currentPos = 0;
	m_actualUsedSize = 0;
	
	return;
}

size_t MemManager_t::GetPosition() const
{
	return m_currentPos;
}

bool MemManager_t::SetPosition(size_t _newPosition)
{
	if (_newPosition <= m_actualUsedSize)
	{
		m_currentPos = _newPosition;
		return true;
	}
	else
	{
		return false;
	}
}

bool MemManager_t::IsEmpty() const
{
	return (bool) !m_actualUsedSize;
}

size_t MemManager_t::GetSize() const
{
	return m_actualUsedSize;
}


