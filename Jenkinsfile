pipeline {
    agent any
    stages {

        stage (build) {
            steps {
                echo "this is build stage"
                sh 'sleep 5'

            }
        }

        stage ('TEST PARALLEL') {
            parallel {
                stage (test 01) {
                    steps {
                        echo "this test 01"
                        sh 'ps -ef'
                    }
                }

                stage (test 02) {
                    steps {
                        echo "this is test 02"
                        sh 'sleep 5'
                    }
                }

                stage (test 03) {
                    steps {
                        echo "this is test 03"
                        sh 'sleep 2'
                    }
                }
            }
        }

        stage (deploy) {
            steps {
                echo "this is deploy stage"
                sh 'sleep 2'
            }
        }
    }   
}
            
