char terrain_displacement_mapping_CC_frag[] = "uniform sampler2D colorTexture1;\n"
                                              "uniform sampler2D colorTexture2;\n"
                                              "\n"
                                              "varying vec2 texcoord;\n"
                                              "varying vec4 basecolor;\n"
                                              "\n"
                                              "void main(void)\n"
                                              "{\n"
                                              "#ifdef GL_TEXTURE_2D\n"
                                              "    const float multiplier = 1.0/2.0;\n"
                                              "    vec4 color = texture2D( colorTexture1, texcoord)*multiplier +\n"
                                              "                 texture2D( colorTexture2, texcoord)*multiplier;\n"
                                              "\n"
                                              "    gl_FragColor = basecolor * color;\n"
                                              "#else\n"
                                              "    gl_FragColor = basecolor;\n"
                                              "#endif\n"
                                              "}\n"
                                              "\n";
