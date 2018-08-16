module.exports = function(grunt) {
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
    sass: {
      options: {
        lineNumbers: true,
        sourcemap: 'none'
      },
      dist: {
        files: {
          'css/soe_helper.css': 'scss/soe_helper.scss',
          'css/soe_helper_print.css': 'scss/soe_helper_print.scss'
        }
      }
    },
    watch: {
      css: {
        files: '**/*.scss',
        tasks: ['sass']
      }
    }
  });
  grunt.loadNpmTasks('grunt-sass');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.registerTask('default', ['watch']);
}
