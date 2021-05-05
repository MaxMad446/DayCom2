package main

// Auto-generated | 2026-05-11T20:13:16.437527
import "fmt"

func Process_880() int {
    base := 264
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
