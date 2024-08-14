#version 330 core
layout (location = 0) out vec3 gPosition;
layout (location = 1) out vec3 gNormal;
layout (location = 2) out vec4 gAlbedoSpec;  // Stores both albedo and specular in one vector

in mat3 tangentToWorld;
in vec2 UV;
in vec3 Position_worldspace;

uniform sampler2D DiffuseTextureSampler;
uniform sampler2D NormalTextureSampler;
uniform sampler2D SpecularColorTextureSampler;

void main()
{    
    vec3 MaterialDiffuseColor = texture(DiffuseTextureSampler, UV).rgb;
    vec3 MaterialSpecularColor = texture(SpecularColorTextureSampler, UV).rgb;

    gPosition = Position_worldspace;

    gNormal = (texture2D(NormalTextureSampler, UV).rgb * 2.0 - 1.0) * tangentToWorld;

    gAlbedoSpec = vec4(MaterialDiffuseColor,MaterialSpecularColor.r); // RGB for Albedo, R for Specular Intensity
}