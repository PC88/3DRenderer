#include "VertexArray.h"
#include "Renderer/Renderer.h"
#include "Renderer/VertexArray.h"
#include "Renderer/OpenGL/OpenGLVertexArray.h"


VertexArray* VertexArray::Create()
{
	switch (Renderer::GetRendererAPI())
	{
	case RendererAPI::API::None: return nullptr;
	case RendererAPI::API::OpenGL: return new OpenGLVertexArray();
	}

	// error check here
	return nullptr;
}