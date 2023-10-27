pipeline{
    agent any
    stages {
        stage ('BUILD') {
            steps{
                echo "this is build stage"
                sh 'sleep 5'
            }
        }
        stage (TEST PARALLEL) {
            parallel {
                stage ('test on chrome') {
                    steps {
                        echo "this is test on chrome browser"
                        sh 'ls -lrt'
                    }
                }
                stage ('test on safari') {
                    steps {
                        echo "this is test on safari browser"
                        sh 'sleep 3'
                    }
                }
            }
        }
        stage ('deploy') {
            steps {
                echo "this is deploy stage"
                sh 'sleep 3'
            }
        }        
        
           
    }
}
