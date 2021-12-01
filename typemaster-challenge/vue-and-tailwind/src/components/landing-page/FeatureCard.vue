<template>
    <div>
        <img class="highlight" :src="require('@/assets/shared/' + icon + '')" alt="">
        <h3>{{title}}</h3>
        <p>{{text}}</p>
    </div>
</template>

<script>
    export default {
        props: {
            icon: {
                type: String,
            },
            title: {
                type: String,
            },
            text: {
                type: String,
            },
        },
        data: function () {
            return {
                featureInfo: this.featureInfoProp
            }
        }
    }
</script>

<style scoped>

</style>