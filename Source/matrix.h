#ifndef RENDERENGINE_MATRIX_H
#define RENDERENGINE_MATRIX_H

#include "vector.h"

typedef struct
{
    float m[4][4];
} mat4_t;

mat4_t mat4_identity(void);
mat4_t mat4_make_scale(float sx, float sy, float sz);
vec4_t mat4_mul_vec4(mat4_t m, vec4_t v);
mat4_t mat4_make_translation(float tx, float ty, float tz);
mat4_t mat4_make_rotation_z(float angle);
mat4_t mat4_make_rotation_x(float angle);
mat4_t mat4_make_rotation_y(float angle);
mat4_t mat4_mul_mat4(mat4_t a, mat4_t b);
mat4_t mat4_make_perspective(float field_of_view, float aspect_ratio, float z_near, float z_far);
vec4_t mat4_mul_vec4_project(mat4_t projection_matrix, vec4_t v);
mat4_t mat4_look_at(vec3_t eye, vec3_t target, vec3_t up);

#endif