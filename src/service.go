package main

// Auto-generated | 2026-05-12T20:55:48.938415
import "fmt"

func Process_793() int {
    base := 250
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_793())
}
