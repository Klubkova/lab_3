
#include "FigureArray.h"
FigureArray::FigureArray()
{
	for (int i = 0; i < size; i++)
	{
		a[i] = ArrayItem();
	}
}
void FigureArray::Insert(std::shared_ptr<Pentagon> &pentagon, int index)
{
	a[index] = ArrayItem(pentagon);
}
void FigureArray::Insert(std::shared_ptr<Rhombus> &rhombus, int index)
{
	a[index] = ArrayItem(rhombus);
}
void FigureArray::Insert(std::shared_ptr<Trapeze> &trapeze, int index)
{
	a[index] = ArrayItem(trapeze);
}
bool FigureArray::IsPentagon(int index)
{
	return a[index].IsPentagon();
}
bool FigureArray::IsRhombus(int index)
{
	return a[index].IsRhombus();
}
bool FigureArray::IsTrapeze(int index)
{
	return a[index].IsRhombus();
}
std::shared_ptr<Pentagon> FigureArray::GetPentagon(int index)
{
	return a[index].GetPentagon();
}
std::shared_ptr<Rhombus> FigureArray::GetRhombus(intф index)
{
	return a[index].GetRhombus();
}
std::shared_ptr<Trapeze> FigureArray::GetTrapeze(int index)
{
	return a[index].GetTrapeze();
}
void FigureArray::Delete(int index)
{
	a[index] = ArrayItem();
}
std::ostream& operator << (std::ostream &os, FigureArray &array)
{
	for (int i = 0; i < size; i++)
	{
		os << "["<<i<<"] "<<array.a[i] << std::endl;
	}
	return os;
}
FigureArray::~FigureArray()
{
	for (int i = 0; i < size; i++)
	{
		a[i] = ArrayItem();
	}
}
