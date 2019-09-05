#include "VertexArray.h"
#include "Renderer/Renderer.h"
#include "Renderer/VertexArray.h"
#include "Renderer/OpenGL/OpenGLVertexArray.h"

VertexArray::VertexArray()
{
}


VertexArray::~VertexArray()
{
}


VertexArray* VertexArray::Create()
{
	switch (Renderer::GetRendererAPI())
	{
	case RendererAPI::None: return nullptr;
	case RendererAPI::OpenGL: return new OpenGLVertexArray();
	}

	// error check here
	return nullptr;
}