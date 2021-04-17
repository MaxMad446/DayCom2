package main

// Auto-generated | 2026-05-11T20:11:11.020326
import "fmt"

func Process_773() int {
    base := 311
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
