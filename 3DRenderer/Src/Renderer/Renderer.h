#pragma once

enum class RendererAPI
{
	None = 0, OpenGL = 1, Direct3D = 2, Vulkan = 3
};

class Renderer
{
private:
	static RendererAPI s_RendererAPI; 

public:
	Renderer();
	virtual ~Renderer();

	static inline RendererAPI GetRendererAPI() { return s_RendererAPI; }
};

