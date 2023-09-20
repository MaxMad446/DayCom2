package main

// Auto-generated | 2026-05-11T22:07:09.752743
import "fmt"

func Process_475() int {
    base := 30
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_475())
}
