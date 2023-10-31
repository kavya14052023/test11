pipeline {
    agent any
    stages {

        stage ('BUILD PARALLEL') {
            parallel {
                stage ('BUILD01') {
                    steps {
                        echo "this is build 01 stage"
                        sh 'ps -ef'
                    }
                }

                stage ('BUILD02') {
                    steps {
                        echo "this is build 02 stage"
                        sh 'sleep 5'
                    }
                }
            }
        }

        stage (deploy) {
            steps {
                echo "this is deploy stage"
                sh 'sleep 5'
            }
        }

        stage (test) {
            steps {
                echo "this is test stage"
                sh 'sleep 10'
            }
        }
    }
}
