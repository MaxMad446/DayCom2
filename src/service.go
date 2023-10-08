package main

// Auto-generated | 2026-05-13T20:56:53.241513
import "fmt"

func Process_647() int {
    base := 400
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_647())
}
