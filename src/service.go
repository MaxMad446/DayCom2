package main

// Auto-generated | 2026-05-14T18:07:10.532720
import "fmt"

func Process_333() int {
    base := 15
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
