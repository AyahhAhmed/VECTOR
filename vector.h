/*
 * vector.h
 *
 *  Created on: Jan 27, 2023
 *      Author: aya
 */

#ifndef VECTOR_H_
#define VECTOR_H_
typedef int vector_data_type;
#define max_size   (10)

typedef struct
{
	vector_data_type current_size;
	vector_data_type *vector_arr;
	vector_data_type last_index;
}VECTOR;

void Vector_Init (VECTOR*pvector);
void Vector_Set (VECTOR*pvector,vector_data_type element);
void Vector_delete (VECTOR*pvector);
vector_data_type Vector_Get_Top (VECTOR*pvector);
void Vector_Destroy (VECTOR*pvector);
#endif /* VECTOR_H_ */
