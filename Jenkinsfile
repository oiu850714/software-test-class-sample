pipeline {
    agent {
        docker {
            image 'gcc'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'git submodule update --init --recursive'
                sh 'make -C make'
            }
        }
        stage('Test') {
            steps {
                sh 'make -C make test'
            }
        }
    }
}
