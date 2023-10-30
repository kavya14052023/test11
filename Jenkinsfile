pipeline {
    agents any
    stages {

        stage ('BUILD') {
            steps {
                echo "this is build stage"
                sh '''
                       sleep 5
                       exit 0
                   '''
            }
        }

        stage ('TEST') {
            steps {
                echo "this is test stage"
                sh 'sleep 3; exit 0'

            }
        }

        stage ('DEPLOY') {
            steps {
                echo "this is deploy stage"
                sh 'sleep 2'
            }
        }

    }
}
