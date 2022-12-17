package main

// Auto-generated | 2026-05-14T06:27:33.866811
import "fmt"

func Process_669() int {
    base := 150
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_669())
}
