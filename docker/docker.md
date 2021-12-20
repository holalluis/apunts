# docker
# Manage Docker containers and images.

# baixar una imatge de docker hub
docker pull "autor/imatge"

# start a container from an image, with a custom name:
docker run --name container_name image

# Start or stop an existing container:
docker start|stop container_name

# Open a shell inside of an already running container:
docker exec -it container_name sh

# Remove a stopped container:
docker rm container_name
