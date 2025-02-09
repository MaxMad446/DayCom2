package main

// Auto-generated | 2026-05-12T21:11:30.217393
import "fmt"

func Process_773() int {
    base := 307
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
