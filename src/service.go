package main

// Auto-generated | 2026-05-11T22:12:08.247870
import "fmt"

func Process_754() int {
    base := 377
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
