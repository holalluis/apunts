INTRODUCTION TO SLURM (https://www.youtube.com/watch?v=K_JIPrcPHCg)
-------------------------------------------------------------------
  - The preferred way to use a supercomputer is through submitting batch jobs
    to a scheduler system which governs accesses to the compute nodes

  - Slurm: open source fault tolerant scalable cluster management and job
    scheduling system

  - Components of Slurm
    - slurmd:    daemon in each compute server (node)
    - slurmctld: centralized manager to monitor resources and wor

-------------------------------------------------------------------------------
  User cmds     Controller daemons                 Compute node daemons
  scontrol <--> +-----------+ <--> +--------+ <--> slurmd (node 1)
  sinfo    <--> | slurmctld |      | slurmd | <--> slurmd (node 2)
  squeue   <--> |           |      +--------+ <--> ...
  scancel  <--> |           |
  sacct    <--> |           |
  srun     <--> +-----------+

-------------------------------------------------------------------------------
  A single job step may be started that uses all nodes allocated to the job
  ```
    #!/bin/bash
    #
    # SBATCH --job-name = test_omp
    # SBATCH --output   = result_omp.txt
    #
    # SBATCH --ntasks        = 1
    # SBATCH --cpus-per-task = 4
    # SBATCH --time          = 10:00
    # SBATCH --mem-per-cpu   = 100

    export OMP_NUM_TRHEADS=$SLURM_CPUS_PER_TASK
    ./hello.omp
  ```
  Several job steps may independently use a portion of the allocation
  ```
    #!/bin/bash
    #
    # SBATCH --ntasks = 8
    for i in {1..1000}
    do
      srun -n1 --exclusive ./myprog $i &
    done
    wait
  ```

User commands manual pages
--------------------------
  - example: man sinfo
  - example: sinfo --help

  sacct:  report job or job step accounting information about active or completed jobs
  salloc: allocate resources for a job in real time. This spawns a shell used to execute srun commands.
  sattach: attach stdin, stdout and stderr to a job
  ...

Creating a job
--------------
  submission script = shell script
  ```
    #!/bin/bash
    # SBATCH directives
    job
  ```
  example:
  ```submit.sh
    #!/bin/bash
    #SBATCH --job-name=test
    #SBATCH --output=res.txt
    #SBATCH --ntasks=1
    #SBATCH --time=60:00
    #SBATCH --mem-per-cpu=200

    srun hostname
    srun sleep 60
  ```
  To submit it to the queue:

  $ sbatch submit.sh
  Submitted batch job 292177
