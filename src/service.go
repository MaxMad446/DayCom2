package main

// Auto-generated | 2026-05-14T18:29:12.393101
import "fmt"

func Process_868() int {
    base := 225
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_868())
}
