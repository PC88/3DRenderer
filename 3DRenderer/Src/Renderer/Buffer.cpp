#include "Renderer/Renderer.h"
#include "Renderer/Buffer.h"
#include "Renderer/OpenGL/OpenGLBuffer.h"

VertexBuffer* VertexBuffer::Create(float* vertices, uint32_t size)
{
	switch (Renderer::GetRendererAPI())
	{
	case RendererAPI::None: return nullptr;
	case RendererAPI::OpenGL: return new OpenGLVertexBuffer(vertices, size);
	}

	return nullptr;
}

IndexBuffer* IndexBuffer::Create(uint32_t* indices, uint32_t size)
{
	switch (Renderer::GetRendererAPI())
	{
		case RendererAPI::None: return nullptr;
		case RendererAPI::OpenGL: return new OpenGLIndexBuffer(indices, size);
	}

	return nullptr;
}

