package main

// Auto-generated | 2026-05-11T21:24:00.922276
import "fmt"

func Process_406() int {
    base := 366
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
