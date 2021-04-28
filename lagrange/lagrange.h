// This code conforms with the UFC specification version 2018.2.0.dev0
// and was automatically generated by FFCX version 0.1.0.
//
// This code was generated with the following parameters:
//
//  {'assume_aligned': -1,
//   'epsilon': 1e-14,
//   'output_directory': '.',
//   'padlen': 1,
//   'profile': False,
//   'scalar_type': 'double',
//   'table_atol': 1e-09,
//   'table_rtol': 1e-06,
//   'tabulate_tensor_void': False,
//   'ufl_file': ['lagrange.ufl'],
//   'verbosity': 30,
//   'visualise': False}


#pragma once

typedef double ufc_scalar_t;
#include <ufc.h>

#ifdef __cplusplus
extern "C" {
#endif

extern ufc_finite_element element_0867dce6bf5c3352d4f192cc2fe32c1c51c671a4;

extern ufc_finite_element element_f98876eb49550d506341b4c1d32d16b6eec2e3aa;

extern ufc_finite_element element_057b589b5e2a170d0e50f9cd6ae01874fca139b5;

extern ufc_dofmap dofmap_0867dce6bf5c3352d4f192cc2fe32c1c51c671a4;

extern ufc_dofmap dofmap_f98876eb49550d506341b4c1d32d16b6eec2e3aa;

extern ufc_dofmap dofmap_057b589b5e2a170d0e50f9cd6ae01874fca139b5;

extern ufc_integral integral_cell_otherwise_2e5fce45e3a2757b0fa7a5179f403c198fc91071;

extern ufc_form form_2e5fce45e3a2757b0fa7a5179f403c198fc91071;

// Helper used to create form using name which was given to the
// form in the UFL file.
// This helper is called in user c++ code.
//
extern ufc_form* form_lagrange_a;

// Helper used to create function space using function name
// i.e. name of the Python variable.
//
ufc_function_space* functionspace_form_lagrange_a(const char* function_name);

#ifdef __cplusplus
}
#endif