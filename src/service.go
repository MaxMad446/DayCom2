package main

// Auto-generated | 2026-05-13T20:31:10.529938
import "fmt"

func Process_993() int {
    base := 383
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}
