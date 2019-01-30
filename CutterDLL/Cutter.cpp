// Cutter.cpp: реализация CCutter

#include "stdafx.h"
#include "Cutter.h"


// CCutter



STDMETHODIMP CCutter::Cut_image(HBITMAP* image, unsigned int* x1, unsigned int* y1, unsigned int* x2, unsigned int* y2, HBITMAP* out_image)
{
	// TODO: Добавьте сюда код реализации.

	*out_image = *image;

	return S_OK;
}