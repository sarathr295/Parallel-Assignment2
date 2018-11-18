#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    MPI_Init(NULL, NULL);

   
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

  if(count !=2 )
  {break;}
  
    MPI_COMM_rank(MPI_COMM_WORLD,myid)
    if(myid=0)
    {master (100);
    //THIS IS THE NUMBER TO BE SEND BY THE MASTER}
    else
    {slave();}
  

    MPI_Finalize();
    
    void master(int x)
    {
		MPI_SEND(x,1,MPI_INT,1,0,MPI_COMM_WORLD);
		int i=-1;
		MPI_SEND(i,1,MPI_INT,1,0,MPI_COMM_WORLD);		}
		void slave()
		{
			MPI_recv(msg,1,MPI_INT,0,0,MPI_COMM_WORLD,status)
			while (msg!=-1)
			{use_girder(msg);
			MPI_RECV(msg,1,MP_INT,0,0,MPI_COMM_WORLD,status);
			printf(¨1¨);
			}
}}
