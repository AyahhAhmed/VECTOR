/*
 * vector.c
 *
 *  Created on: Jan 27, 2023
 *      Author: aya
 */
#include "vector.h"
void Vector_Init (VECTOR*pvector)
{pvector->current_size  =0;
 pvector->last_index =0;
 pvector->vector_arr=(vector_data_type*)malloc(sizeof(vector_data_type));

}
void Vector_Set (VECTOR*pvector,vector_data_type element)
{
	if(pvector->current_size==0&&pvector->current_size<max_size)
	{
	 pvector->vector_arr[max_size]=element;
     pvector->current_size++;
     pvector->last_index++;

	}

	else if (pvector->current_size>=max_size)
	 {
		vector_data_type*ptemp_arr=pvector->vector_arr;
		vector_data_type counter;
		pvector->current_size*=2;
		pvector->vector_arr =(vector_data_type*)realloc(pvector->vector_arr ,pvector->current_size);
   for(counter=0;counter<pvector->last_index;counter++)
   {
	   ptemp_arr[counter];
   }
   pvector->vector_arr[counter]= ptemp_arr[counter];

   free (ptemp_arr[counter]);


	 }

}
void Vector_delete (VECTOR*pvector)
{
	if (pvector->last_index==1)
	{
		Vector_Destroy(pvector);
	}
	else if (pvector->last_index==pvector->current_size/2+1)
	{
		free(pvector->last_index);
		pvector->current_size/=2;
		pvector->vector_arr =(vector_data_type*)realloc(pvector->vector_arr ,pvector->current_size);
	}
	else
	{
		pvector->last_index--;
	}
}
vector_data_type Vector_Get_Top (VECTOR*pvector)
{
	return pvector->last_index;
}
void Vector_Destroy (VECTOR*pvector)
{
	pvector->current_size  =0;
	 pvector->last_index =0;
	free ( pvector->vector_arr);
}
